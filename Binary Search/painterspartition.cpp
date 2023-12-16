bool isPossible(vector<int> &boards, int k, int mid){

    int painterCount=1;
    int boardSum=0;

    for(int i=0; i<boards.size(); i++){

        if(boardSum+boards[i]<=mid){
            boardSum+=boards[i];
        }

        else{
            painterCount++;
            if(painterCount>k || boards[i]>mid){
                return false;
            }
            boardSum=boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int start=0;

    int sum=0;
    for(int i=0; i<boards.size(); i++){
        sum+=boards[i];
    }
    int end=sum;

    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){

        if(isPossible(boards, k, mid)){
            ans=mid;
            end=mid-1;
        }

        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

// MIHIRR42
