//***********************************FIXED ARRAY*******************************
#include <iostream>
using namespace std;


//****************************FOR DISPLAY ARRAY********************************
void create(int arr[],int capacity){
    for (int i=0;i<capacity;i++){
        cout<<arr[i]<<" "; 
    }
    cout << endl;
}


//***********************************SEARCHING ELEMENT IN FIXED ARRAY*****************************
int search(int arr[],int capacity){
    int x,i,pos,idx;
    cout<<"Enter the element you want to search = ";
    cin>>x;
    int count=0;
    bool flag=0;
    for(i=0;i<=capacity;i++){
        if(arr[i]==x){
            count+=1;
            pos=i+1;
            idx=pos-1;
            //cout<<"postion = "<<i+1<<endl;
            flag=1;
        }
    }
     if (flag==0){
        cout<<"SORRY!!, Your elment is not present.";
    }
    else{
        cout<<"At "<<count<<" places your elemment is present\n";
        cout<<"postion = "<< pos <<endl;
    }
    return -1;
}


// ****************************For Insertion of Element********************************
int insert(int arr[],int size,int capacity,int x,int pos){
    cout<<"Enter the element to be insert\n";
    cin>>x;
    cout<<"Enter the position\n";
    cin>>pos;
    if ((size==capacity)||(size>capacity)){//firstly check space present in array?? 
     cout<<"FAILED\n"<<"Either size>capacity or their is no space to insertion\n";
        return size;
    }
    int idx=pos-1;
    for(int i=capacity-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=x;
    return(capacity+1);
}


//********** ********************FOR DELETION OF ELEMENT***********************************
int del(int arr[],int size,int x){
    int i,j;
    cout<<"Enter the element you want to delete";
    cin>>x;
    for(i=0;i<=size;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==size){
        return size;
    }
    if(i<size){
      size=size-1;
      for ( j=i;j<size;j++){
          arr[j]=arr[j+1];
      }
    }
    return(size);
    
}



int main(){
    int size,capacity,x,pos,n;
    cout<<"Enter the capacity of array\n";
    cin>>capacity;
    cout<<"Enter the number of element in array= ";
    cin>>size;
    int arr[capacity];
    cout<<"Enter the elements in array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    create(arr,capacity);
    

    
    //n=sizeof(arr)/sizeof(arr[0]);

    insert(arr,size,capacity,x,pos);    
    create (arr,capacity);
    
     n=sizeof(arr)/sizeof(arr[0]);

    n=del(arr,size,x);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    //create (arr,capacity);

    //search(arr,capacity);
    return 0;
}
