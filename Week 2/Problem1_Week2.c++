#include<iostream>
using namespace std;

class Array{
public:
    void insertElement(int* arr, int element, int size){
        arr[size-1]=element;
    }

    void deleteElement(int* arr, int element, int size){
        for(int i=0; i<size; i++){
            if(arr[i]==element){
                for(int j=i; j<size-1; j++){
                    arr[j]=arr[j+1];
                }
                break;
            }
        }
    }

    void searchElement(int* arr, int element, int size){
        for(int i=0; i<size; i++){
            if(arr[i]==element){
                cout<<"Element found at index: "<<i<<endl;
                return;
            }
        }
        cout<<"Element not found"<<endl;
    }

    void displayArray(int* arr, int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void sortArray(int* arr, int size){
        for(int i=0; i<size; i++){
            for(int j=0; j<size-i-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
};

int main(){
    int arr[]={10,20,30,40};
    int size=5;
    Array a;

    cout<<"Array Functions"<<endl;
    cout<<"1. Insert Element"<<endl;
    cout<<"2. Delete Element"<<endl;
    cout<<"3. Search Element"<<endl;
    cout<<"4. Display Array"<<endl;
    cout<<"5. Sort the Array"<<endl;
    cout<<"6. Exit"<<endl;

    int ch;
    cout<<"Enter your choice: ";
    cin>>ch;
    if(ch==1){
        int element;
        cout<<"Enter the element to insert: ";
        cin>>element;
        a.insertElement(arr, element, size);
        cout<<"Array after insertion: ";
        a.displayArray(arr, size);
    }
    else if(ch==2){
        int element;
        cout<<"Enter the element to delete: ";
        cin>>element;
        a.deleteElement(arr, element, size);
        cout<<"Array after deletion: ";
        a.displayArray(arr, size);
    }
    else if(ch==3){
        int element;
        cout<<"Enter the element to search: ";
        cin>>element;
        a.searchElement(arr, element, size);
    }
    else if(ch==4){
        cout<<"Array: ";
        a.displayArray(arr, size);
    }
    else if(ch==5){
        a.sortArray(arr, size);
        cout<<"Array after sorting: ";
        a.displayArray(arr, size);
    }
    else if(ch==6){
        return 0;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    return 0;
}
