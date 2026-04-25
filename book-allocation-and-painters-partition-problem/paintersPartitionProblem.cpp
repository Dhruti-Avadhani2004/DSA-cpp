// THIS IS SUBMITTED CODE ONLY, SAME AS BOOK ALLOCATION

bool isValue(vector<int> &boards, int k, int mid){

    int sum = 0;
    int painters = 1;
    int n = boards.size();

    for(int i = 0; i < n; i++){
        if(sum + boards[i] <= mid){
            sum = sum + boards[i];
        }
        else{
            painters++;
            sum = boards[i];
        }

    }

    if(painters <= k){
        return true;
    }
    else{
        return false;
    }

}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    // BOARDS = no of books
    // k = no of students aka no of painters

    int n = boards.size();

    int low = *max_element(boards.begin(), boards.end());
    int high = 0;
    for(int i = 0; i < n; i++){
        high = high + boards[i];
    }
    int mid;
    int ans;

    while(low<=high){
        mid = low + ((high - low)/2);
        if(isValue(boards, k, mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}