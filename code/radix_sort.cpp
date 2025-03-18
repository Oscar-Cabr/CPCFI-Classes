void radix_sort(vector<int>& list, int digits, int radix)
{
    vector<queue<int>> buckets(radix);
    int exp = 1;

    for( int d = 0; d < digits; d++ )
    {
        for( int num : list )
        {
            int digit = ( num / exp ) % radix;
            buckets[ digit ].push( num );
        }

        int idx = 0;
        for (int i = 0; i < radix; ++i)
        {
            while( ! buckets[i].empty() )
            {
                list[idx++] = buckets[i].front();
                buckets[i].pop();
            }
        }

        exp *= radix;
    }
}