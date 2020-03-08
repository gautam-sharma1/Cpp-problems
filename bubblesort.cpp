# include <iostream>


using namespace std;
void swap(int*x, int *y){
    int temp =*x;
    *x=*y;
    *y=temp;
}

void bubble_sort(int A[], size_t n){
    int flag{0};
    for(auto i=0;i<n-1; i++){
        flag=0;
        for(auto j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                  swap(&A[j], &A[j+1]);
                  flag=1;
            }
        }
        if (flag==0){
            break;
        }
    }
}

void print(int A[],size_t SIZE){

  cout<<SIZE<<endl;
  for (auto i=0; i<SIZE;i++){
      cout<< A[i]<< " ";
  }
    cout<<endl;

}
int main(){
   int K[]={1,21,3,100,999,45,78,89,54,34,2,3,31,42};
   size_t SIZE= sizeof(K)/sizeof(K[0]);
   print(K,SIZE);
   bubble_sort(K,SIZE);
   for (auto i=0; i<SIZE;i++){
      cout<< K[i]<< " ";}

   return 0;

}
