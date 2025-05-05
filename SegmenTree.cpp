
#include <bits/stdc++.h>

using namespace std;

const int MAX = 100000;
int arr[MAX];
int seg[4*MAX];
int lazy[4*MAX];

#define PRINT(x) cout<<x<<endl;
#define REP(x,y,z) for(int x = y; x < z; x++)
#define TESTCASES true

void build(int ind, int low, int high){
    
    // BASE
    if(low == high){
        seg[ind] = arr[low];
        return;
    }
    
    // VARS
    int mid = low + (high - low)/2;
    int lInd = 2*ind + 1;
    int rInd = 2*ind + 2;
    
    // BUILD TREE
    build(lInd, low, mid);
    build(rInd, mid + 1, high);
    
    // FILL TREE
    seg[ind] = seg[lInd] + seg[rInd];
    
}

int query(int ind, int low, int high, int l, int r){
    
    // FULL COVER // EXACT VALUE
    if(low >= l && high <= r){
        return seg[ind];   
    }
    
    // FULL OUT // NEUTRAL VALUE
    if(low > r || high < l){
        return 0;
    }
    
    // VARS
    int mid = low + (high - low)/2;
    int lInd = 2*ind + 1;
    int rInd = 2*ind + 2;
    
    // PARTIAL
    int left = query(lInd, low, mid, l, r);
    int right = query(rInd, mid+1, high, l, r);
    
    // OPERATION
    return left + right;
    
}

void pointUpdate(int ind, int low, int high, int node, int val){
    
    // BASE
    if(low == high){
        arr[node] = val;
        seg[ind] = val;
    }
    
    else{
        
        // VARS
        int mid = low + (high - low)/2;
        int lInd = 2*ind + 1;
        int rInd = 2*ind + 2;
        
        // NODE L
        if(low <= node && node <= mid){
            pointUpdate(lInd, low, mid, node, val);
        }
        
        // NODE R
        else{
            pointUpdate(rInd, mid + 1, high, node, val);
        }
        
        // UPDATE
        seg[ind] = seg[lInd] + seg[rInd];
    }
}

void rangeUpdate(int ind, int low, int high, int l, int r, int val){
    
    // VARS
    int mid = low + (high - low)/2;
    int lInd = 2*ind + 1;
    int rInd = 2*ind + 2;
    
    // LAZY PEND
    if(lazy[ind]){
        seg[ind] += (high - low + 1 ) * lazy[ind];
        if(low != high){
            lazy[lInd] += lazy[ind];
            lazy[rInd] += lazy[ind];
        }
        lazy[ind] = 0;
    }
    
    // FULL OUT
    if(low > r || high < l || low > high){
        return;
    }
    
    // FULL COVER
    if(low >= l && high <= r){
        seg[ind] += (r - l + 1) * val;
        if(low != high){
            lazy[lInd] += val;
            lazy[rInd] += val;    
        }
        return;
    }
    
    // UPDATE
    rangeUpdate(lInd, low, mid, l, r, val);
    rangeUpdate(rInd, mid + 1, high, l, r, val);
    seg[ind] = seg[lInd] + seg[rInd];
}

int querySumLazy(int ind, int low, int high, int l, int r){
    
    // VARS
    int mid = low + (high - low)/2;
    int lInd = 2*ind + 1;
    int rInd = 2*ind + 2;
    
    // LAZY PEND
    if(lazy[ind]){
        seg[ind] += (high - low + 1 ) * lazy[ind];
        if(low != high){
            lazy[lInd] += lazy[ind];
            lazy[rInd] += lazy[ind];
        }
        lazy[ind] = 0;
    }
    
    // FULL OUT
    if(low > r || high < l || low > high){
        return 0;
    }
    
    // FULL COVER
    if(low >= l && high <= r){
        return seg[ind];
    }
    
    // QUERY
    return querySumLazy(lInd, low, mid, l, r) + querySumLazy(rInd, mid, high, l, r);
}

void solve(){
    
    // ENTRADA ESTANDAR 
    int n;
    cin>>n;
    REP(i,0,n){
        cin>>arr[i];
    }
    
    // CONSTRUIR EL ARBOL
    build(0, 0, n-1);
    
    // ENTRADA ESTANDAR DE QUERIES
    int q, l, r;
    cin>>q;
    REP(i,0,q){
        cin>>l>>r;
        
        // QUERIES
        PRINT(query(0, 0, n-1, l, r));
    }
    
}

int main()
{
    
    // PLANTILLA TESTCASES
    int tt;
    if(TESTCASES){
        cin>>tt;
        REP(i,0,tt){
            solve();
        }
    }
    else{
        solve();
    }
}

