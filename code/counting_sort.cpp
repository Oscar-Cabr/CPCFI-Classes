void counting_sort( vector<int>& list, int max_value )
{
    vector<int> count(max_value + 1, 0);

    for( int num : list )
        count[num]++;

    int index = 0;
    for ( int i = 0; i <= max_value; i++ )
    {
        while( count[i] > 0 )
        {
            list[ index++ ] = i;
            count[i]--;
        }
    }
}