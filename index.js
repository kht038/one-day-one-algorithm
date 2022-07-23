// const let
// hoisting
// 변수 선언이 위로 끌어올려와 진 것 처럼 작동하는 현상
// 호이스팅을 막기위해서 const let 키워드 사용
// 변수의 중복 선언 방지 (var 키워드는 허용)
// 유지보수의 용이성을 위해 사용하는 키워드
// 할당과 선언이 쪼개져있음

// const func = () => {
//     console.log('hello')
// }
// 람다식의 매개변수가 하나인 경우  소괄호를 생략할 수 있음
// 리턴값이 하나만 있을때 중괄호도 생략가능
// 매개변수는 함수안에서 관리할 수 있도록 변수를 추가적으로 생성
// const test = (data) => {
//     const [id, pw] = data; // 디스트럭쳐링
// }
// const data = {
//     "id": "kth",
//     "pw": "1234"
// }
// test(data)

// rest 파라미터
// 어떤 길이의 매개변수를 넣던지 리스트로 반환
// const test = (...data) => {
//     ...data 
// }
// test(1, 2)

// const boxs = document.querySelectorAll('.box');
// const newBoxs = [...boxs];

// const list1 = [1, 2, 3];
// const list2 = [4, 5, 6];

// const list3 = [...list1, ...list2]; // 리스트합치기 스프레드 연산자

// template literal

// Array helper
// 반복문없이 배열을 순회
const list = [1,2,3,4,5];
// map 은 리스트를 반복문없이 순회하여 값을 변경하여 저장이 가능함. (얕은 복사)
const newList = list.map((elem) => {
    return elem * elem
})

const newList2 = list.map(elem => elem * elem)

// foreach 는 저장하지 않고 순회한다
list.forEach(elem => console.log(elem))

// filter 리스트를 다른 리스트로 저장해준다. map과 비슷하나 제거할 수 있다.

const newList3 = list.fillter(elem => elem < 3)

// reduce 리스트의 내용을 순회해서 하나의 변수로 압축

const sum = list.reduce((acc, curr) => {
    return acc +  curr // acc가 쌓인값, curr이 현재값
}, 0)//초기값 지정

const minValue = list.reduce((acc, curr) =>{
    return Math.min(acc, curr)
}, list[0])

// 중복제거 정렬
const list2 = [1,2,1,3,4,5,1,4,1,2]
const sortedSet = list2.sort().reduce((acc, curr) => {
    const length = acc.length
    if (length == 0 || acc[length - 1] !== curr){
        acc.push
    }
    return acc
}, [])

// 함수 기본 매개변수 설정