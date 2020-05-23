// This is a function to calculate the sum of the values in a vector
void total(vector<int>h, int & sum){
     for (long unsigned int i=0;i<h.size();i++){
         sum+=h[i];
     }
 }

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    /*
     * Write your code here.
     */
     int sum1,sum2,sum3;
     sum1=sum2=sum3=0;
     total(h1,sum1); total(h2,sum2); total(h3,sum3);
     //cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
     vector <int>:: iterator it;
     while(true){
         if((sum1==sum2) && (sum2==sum3))
         {
             break;
         }
         int mini = min(sum1, min(sum2,sum3));
         //cout<<"mini "<<mini<<endl;
         if(sum1 >mini){
             it=h1.begin();
             sum1-=h1[0];
             h1.erase(it);
         }
         if(sum2>mini){
             it=h2.begin();
             sum2-=h2[0];
             h2.erase(it);
         }
         if(sum3>mini){
             it=h3.begin();
             sum3-=h3[0];
             h3.erase(it);
         }
         //cout<<"sum1 "<<sum1 <<"  sum2 "<<sum2<<"  sum3 "<<sum3<<endl;
     }
     return sum1;
}
