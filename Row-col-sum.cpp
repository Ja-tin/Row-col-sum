#include <iostream>
using namespace std;

// Row-sum

void rowsum(int arr[][30] , int rows, int cols){
  for(int i=0; i<rows; i++){
  int sum=0;
    for(int j=0; j<cols; j++){
      sum=sum+arr[i][j];
    }
    cout<<"The Sum is: "<<sum<<endl;
  }
}
// Col-sum
void colsum(int arr[][30] , int rows, int cols){
  for(int i=0; i<rows; i++){
  int sum=0;
    for(int j=0; j<cols; j++){
      sum=sum+arr[j][i];
    }
    cout<<"The Sum is: "<<sum<<endl;
  }
}

int main(){
  int rows,cols;
  cout<<"Enter the number of Rows:-";
  cin>>rows;
  cout<<"Enter the number of Columns:-";
  cin>>cols;

  int arr[30][30];
  cout<<"Give input of 2D array: "<<endl;
  // for(int i=0; i<rows; i++){
  //   for(int j=0; j<cols; j++){
  //     cin>>arr[i][j];
  //   }
  // }
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin>>arr[i][j];
    }
  }
  cout<<endl<<"2-D array is:- "<<endl<<endl;;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl<<endl;
  }
  // rowsum(arr,rows,cols);
  colsum(arr,rows,cols);

}

