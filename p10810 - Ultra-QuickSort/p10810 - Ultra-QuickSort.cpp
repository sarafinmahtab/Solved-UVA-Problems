#include<bits/stdc++.h>
using namespace std;
long cnt, arr[600000];
void merge_sort(long arr[], long first, long last)
{
    if(first < last)
    {
        long mid = (last+first)/2;

        merge_sort(arr, first, mid);
        merge_sort(arr, mid+1, last);

        long len1 = mid-first+1;
        long len2 = last-mid;
        long* left = (long*) malloc((len1 + 1) * sizeof(long));
        long* right = (long*) malloc((len2 + 1) * sizeof(long));
        long i, j;

        for(i = 1; i <= len1; i++)
        {
            left[i] = arr[first+i-1];
        }

        for(j = 1; j <= len2; j++)
        {
            right[j] = arr[mid+j];
        }

        i = 1;
        j = 1;
        long k = first;
        while(i <= len1 && j <= len2)
        {
            if(left[i] <= right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else
            {
                arr[k] = right[j];
                j++;
                cnt += len1-i+1;
            }

            k++;
        }

        while(i <= len1)
        {
            arr[k++] = left[i++];
        }

        while(j <= len2)
        {
            arr[k++] = right[j++];
        }
    }
}
int main()
{
    long n, i;

    while(scanf("%ld", &n) == 1)
    {
        if(n == 0)
        {
            break;
        }

        cnt = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%ld", &arr[i+1]);
        }

        merge_sort(arr, 1, n);

        printf("%ld\n",  cnt);
    }

    return 0;
}
