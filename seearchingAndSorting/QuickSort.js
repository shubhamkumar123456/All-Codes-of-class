let arr = [10, 70, 30, 20, 11, 99];

function swap(a, b) {
  let temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

function partition(low, high) {
  let pivot = arr[high];
  let i = low - 1;
  for (let j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(i, j);
    }
  }
  i++;
  swap(i, high);
  return i;
}

function QuickSort(low, high) {
    if(low <high){
 let pivotIndex = partition(low, high);

  QuickSort(low, pivotIndex - 1);
  QuickSort(pivotIndex + 1, high);
    }
 
}

QuickSort(0, arr.length - 1);
console.log(arr);
