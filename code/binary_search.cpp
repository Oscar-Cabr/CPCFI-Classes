int binary_search( vector<int>& list, int n, int target )
{
    int x0 = 0, x1 = n-1, mid;
    while( x0 <= x1 )
    {
        mid = (x0 + x1) / 2; // (x1 - x0) / 2 + x0;
        if( list[mid] == target )
            return mid;
        list[mid] < target ? x0 = mid + 1 : x1 = mid - 1;
    }
    return -1;
}

int binary_search( vector<int>& list, int n, int target )
{
    int ans = 0;

    function<bool(int)> check = [&](int idx)->bool
    {
        return idx < n && list[idx] <= target;
    };

    for( int i = 31; i >= 0; i-- )
    {
        if( check( ans + (1 << i) ) )
            ans += 1 << i;
    }

    return list[ans] == target ? ans : -1;
}

int binary_search( vector<int>& list, int n, int target )
{
    int k = 0;
    
    for( int b = n/2; b >= 1; b /= 2)
        while( k+b < n && list[k+b] <= target )
            k += b;

    if( list[k] == target )
        return k;

    return -1;
}