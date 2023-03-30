basically another version of intersection in the given range 
basically find out how many trains intersect at a given time shown in gfg video 

but down here is a great approach 

   int findPlatform(int arr[], int dep[], int n)
{
    // Insert all the times (arr. and dep.)
    // in the multiset.
    multiset<pair<int, char> > order;
    for (int i = 0; i < n; i++) {

        // If its arrival then second value
        // of pair is 'a' else 'd'
        order.insert({arr[i], 'a'});
        order.insert({dep[i], 'd'});
    }

    int result = 0;
    int plat_needed = 0;

    // Start iterating the multiset.
    for (auto it : order) {

        // If its 'a' then add 1 to plat_needed
        // else minus 1 from plat_needed.
        if (it.second == 'a')
            plat_needed++;
        else
            plat_needed--;

        if (plat_needed > result)
            result = plat_needed;
    }
    return result;
}