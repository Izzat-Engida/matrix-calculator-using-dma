#include<iostream>
using namespace std;
void result(float list[],int max){
    float maxi,min;
    min=list[0];
    maxi=list[0];
    for(int i=0;i<max;i++){
        if(maxi<list[i]){
            maxi=list[i];
        }
    } 
   cout<<"the maximum is: "<<maxi<<endl;
    for(int i=0;i<max;i++){
        if(min>list[i]){
            min=list[i];
        }
    }
    cout<<"the min is: "<<min<<endl;
    float range=maxi-min;
  float sum=0;
for(int i=0;i<max;i++){
    sum+=list[i];
}
float ave=sum/max;
float med=0;
 
float temp;
    for(int i=0;i<max;i++){
     for(int j=0;j<max-i-1;j++){
      if(list[j]>list[j+1]){
       temp=list[i];
          list[j]=list[j+1];
          list[j+1]=temp;
      }
     }
        
    }
if(max%2==0){

med=(list[max/2]+list[(max/2)-1])/2;

}
else{

med=list[(max+1)/2];
}
cout<<"the range of the marks is: "<<range<<endl;
cout<<"the mean of the marks is: "<<ave<<endl;
cout<<"the median is "<<float(med)<<endl;
}
int main(){
    float *ptr;
    int max;
    cout<<"enter the maximum amount of students: ";
    cin>>max;
    ptr=new float[max];
    float array[max];
    for(int i=0;i<max;i++){
        cout<<"enter the students: ";
        cin>>*(ptr+i);
        array[i]=*(ptr+i);

    }
     result(array,max);


}
