/*
Assume you initially have an empty array say ‘ARR’.
You need to return the updated array provided that some ‘Q’ number of queries were performed on this array.
The queries are of two types:
1. 1 ‘VAL’, for this type of query, you need to insert the integer 'VAL' to the end of the array.
2. 2 ‘VAL’, for this type of query, you need to take the bitwise XOR of all the elements of the array with 'VAL' i.e each element of the array ‘ARR’ will be updated as ‘ARR[i]’ = ‘ARR[i]’ ^ ‘VAL’ ( ^ denotes the bitwise XOR operation).
*/
#include<bits/stdc++.h>

using namespace std;
vector<int> xorQuery(vector<vector<int> > &queries)
{
	// Create an empty array ans
	vector<int> ans;
    
    // Iterate over all the queries
	for (int i = 0 ; i < queries.size() ; i++)
	{   
		// If the query is of type 1
		if (queries[i][0] == 1)
		{
			ans.push_back(queries[i][1]);
		}

		// If query is of type 2
		else
		{
			int temp = queries[i][1];
			for (int j = 0 ; j < ans.size() ; j++)
			{
				ans[j] = ans[j] ^ temp;
			}
		}
	}

	// Return the modified array
	return ans;
}
int main()
{
	vector<vector<int> > query{ {1,2},
								{1,3} };
	
	cout<<xorQuery(query);
	
	return 0;
}
