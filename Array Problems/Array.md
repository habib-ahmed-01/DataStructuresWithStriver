Array Information

- Array can be defined as below in C++
```
int arr[6]; 
```

- Array max length
``` 
Inside main() -> 10^6
```
```
Globally outside -> 10^7
```


- If array is declared in main() -> they contain garbage values
```
int main(){
    int arr[6];
}
```

- If array defined outside globally -> They are stored with 0's
```
int arr[6];
int main(){
    //pass;
}
```