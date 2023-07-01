// The **product sum** of two equal-length arrays a and b is equal to the sum of a[i] * b[i] for all 0 <= i < a.length (**0-indexed**).

// - For example, if a = [1,2,3,4] and b = [5,2,3,1], the **product sum** would be 1*5 + 2*2 + 3*3 + 4*1 = 22.

// Given two arrays nums1 and nums2 of length n, return *the **minimum product sum** if you are allowed to **rearrange** the **order** of the elements in* nums1.

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    long long int min_product_sum(int nums1[], int nums2[], int n)
    {
        long long int ans=0;
        sort(nums1, nums1+n);
        sort(nums2, nums2+n);
        for(int i=0; i<n; i++) ans+=((long long)(nums1[i]*nums2[n-i-1]));
        return ans;
    }
};
int main()
 {
    int n;
    cin>>n; // no.of elements
    int a[n], b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    solution ob;
    cout<< ob.min_product_sum(a, b, n) <<endl;
	return 0;
}