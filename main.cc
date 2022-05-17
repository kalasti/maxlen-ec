#include <iostream> 

using namespace std; 

int main() {
    int arr_one[] = {-1, 2, 3, -1, -2};
    int* arr_ptr = arr_one; 

    int MaxLength(int* arr[]); 
    int ans = MaxLength(&arr_ptr); 
    std::cout << ans;


    return 0;
}

int MaxLength(int* arr[]) {
    return (sizeof(&arr)/sizeof(&arr[0]));
}
