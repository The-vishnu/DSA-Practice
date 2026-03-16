let chunked = []
let j = 0
let k = 0;

chunked[j] = []

function chunk(array, size){
    for(let i = 0; i < array.length; i++){
        if(chunked[j].length < size){
            chunked[j][k] = array[i]
            k++;
        }
        else{
            j++;
            k = 0;
            chunked[j] = []
            chunked[j][k++] = array[i]

        }
    }

    return chunked;
}

let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
let size = 3;

console.log(chunk(array, size))