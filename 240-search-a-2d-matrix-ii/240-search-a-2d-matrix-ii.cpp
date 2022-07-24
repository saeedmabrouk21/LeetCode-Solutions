class Solution {
public:
    bool bin(vector<vector<int>>& m,int s,int e,int t,int i){
        if(e>=s){
            cout << s <<" "<<e;
            int mid = s+(e-s)/2;
            if(m[mid][i]==t){
                return true;
            }
            if(m[mid][i]>t){
                return bin(m,s,mid-1,t,i);
            }
            return bin(m,mid+1,e,t,i);
        }
        return false;
    }
   
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found;
        int j;
        int start = 0;
        int end = matrix.size()-1;
        while(start <= end){
            cout<< "start : "<<start << "End : "<<end <<endl;
            int mid = start+(end-start)/2;
            if(mid==0){
                j=0;
                break;
            }
            if(matrix[mid][matrix[0].size()-1]>=target &&matrix[mid-1][matrix[0].size()-1]<target ){
                j= mid;
                break;
            }
            else if(matrix[mid][matrix[0].size()-1]>=target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        //int j ;
        //for(j = 0 ; j < matrix.size();j++){
      //      if(matrix[j][matrix[0].size()-1]>=target){
    //            break;
  //          }
//
        //}
        
        cout << "J "<<j<<endl;
        
        for(int i = 0 ; i < matrix[0].size();i++){
            if(matrix[matrix.size()-1][i]>=target&&matrix[0][i]<=target){
                cout<<"A";
                found = bin(matrix,j,matrix.size()-1,target,i);
            }
            if(found)
                break;
        }
        return found;  
    }
};