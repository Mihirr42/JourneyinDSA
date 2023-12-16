#include<vector>
int getPivot(int* nums, int n){
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;

        while(start<end){
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return start;
    }

    int binarySearch(int* nums, int s, int e, int target){
        int start=s;
        int end=e;
        int mid=start+(end-start)/2;

        while(start<=end){

            if(nums[mid]==target){
                return mid;
            }

            else if(target>nums[mid]){
                start=mid+1;
            }

            else{
                end=mid-1;
            }

            mid=start+(end-start)/2;
        }
        return -1;
    }

int search(int* arr, int n, int key) {
    int pivot=getPivot(arr, n);

    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }

    else{
        return binarySearch(arr, 0, pivot-1, key);
    }    
}

// MIHIRR42
