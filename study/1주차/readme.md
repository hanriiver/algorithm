# 1주차 문제집 소스코드 정리 및 풀이

## Index
  - [Problem](#Problem)
  - [Solved](#Solved)

## Problem
| 순번 | 번호 |
| --- | --- |
| 0 | [2309](https://www.acmicpc.net/problem/2309) |
| 1 | [10808](https://www.acmicpc.net/problem/10808) |
| 2 | [2979](https://www.acmicpc.net/problem/2979) |
| 3 | [10988](https://www.acmicpc.net/problem/10988) |
| 4 | [1159](https://www.acmicpc.net/problem/1159) |
| 5 | [11655](https://www.acmicpc.net/problem/11655) |
| 6 | [9996](https://www.acmicpc.net/problem/9996) |
| 7 | [2559](https://www.acmicpc.net/problem/2559) |
| 8 | [1620](https://www.acmicpc.net/problem/1620) |
| 9 | [9375](https://www.acmicpc.net/problem/9375) |
| 10 | [1213](https://www.acmicpc.net/problem/1213) |
| 11 | [1940](https://www.acmicpc.net/problem/1940) |
| 12 | [3986](https://www.acmicpc.net/problem/3986) |
| 13 | [1629](https://www.acmicpc.net/problem/1629) |
| 14 | [4375](https://www.acmicpc.net/problem/4375) |

## Solved
- [백준(2309)번](https://www.acmicpc.net/problem/2309)
    - next_permutation, prev_permutation을 이용하여 구현하기
    - 재귀를 통해 구현하기
- [백준(10808)번](https://www.acmicpc.net/problem/10808)
    
    - key, value를 이용하는 문제는 - counting array, map, set 으로 구현할 수 있다.
    
    - 이 문제는 n의 개수가 작기 때문에 counting array로 해결하였다.
    
- [백준(2979)번](https://www.acmicpc.net/problem/2979)
    
    - 시간을 처리하는 문제(from, to)는 이상 미만으로 문제를 해결하는게 좋다.
    
    - 시간을 key로 줄 수 있고 트럭의 대수를 value로 줄 수 있다.
    
    - 그렇다면 이 문제 또한 counting array로 해결할 수 있다.
    
    - 트럭의 대수에 따라 case를 나눌 수 있는 조건문을 작성해주면 된다.
    
- [백준(10988)번](https://www.acmicpc.net/problem/10988)
    
    - reverse 함수는 리턴 값이 없기에, 입력 문자열 s를 바로 뒤집게 된다. 
    
    - 임시로 원본을 저장할 수 있는 temp 문자열을 선언하여 비교한다.
    
- [백준(1159) 번](https://www.acmicpc.net/problem/1159)
- [백준(11655) 번](https://www.acmicpc.net/problem/11655)
- [백준(9996) 번](https://www.acmicpc.net/problem/9996)
    - *이 나오기 전 문자열과 *이 나온 이후의 문자열을 추출하여 비교해주는 문제이다.
    - 해당 문자열의 위치를 찾는 함수 s.find(’*’)를 이용하여 *의 위치를 찾는다.
    - substr을 이용하여 앞의 문자열과 뒤의 문자열을 찾는다.
    - substr(시작 인덱스,찾을 문자열의 길이) = 시작 인덱스 부터 찾을 문자열의 길이만큼 반환한다.
    - substr(시작 인덱스) = 시작 인덱스 부터 문자열의 끝까지 반환한다.
    - 예외케이스
        - ab*ab의 최소 만들 수 있는 문자열은 abab이다.
        - 즉, 문자열이 패턴들의 앞 뒤의 길이보다 크거나 같아야 한다.


- [백준(2559) 번](https://www.acmicpc.net/problem/2559)
    - 누적합 = psum[i] = psum[i-1] + arr[i]
    - 초기 설정 값을 1로 잡아주는게 핵심이다.
    - 자기가 원하는 구간의 합을 마음껏 뽑아낼 수 있다.


- [백준(1620) 번](https://www.acmicpc.net/problem/1620)
    - map을 이용하여 key value를 통해 문제를 해결할 수 있다.
    - map을 하나만 만든다면, 이 후 value값으로 key를 찾아야 하는데 2중 포문을 사용하게되면 시간초과를 발생하게 된다. 이유는 n의 값이 10만이기 때문이다.
    - 즉, 각각 key를 저장하는 맵을 2개만들어주는게 핵심이다.
    - 이전의 풀이에서는 이분 탐색으로도 문제를 해결하여 좀 더 효율적인 코드를 작성하였었다.


- [백준(9375) 번](https://www.acmicpc.net/problem/9375)
    - 조합을 유추한다면 곱셈이나, 콤비네이션으로 해결할 수 있다.
    - 경우의 수를 생각해보면 종류 별로 각각 한개씩 매칭시켜줄 수 있다.
    - 하나의 종목을 선택하여 다른 종목을 선택하지 않은 경우를 포함시키게 된다면 (3+1)*(2+1)=12를 가져올 수 있다. 이는 알몸에서 부터 모든 경우를 다 해보는게 되겠습니다.
    - 여기서 알몸인 경우 1개를 빼야하니 12-1을 하면 11이나오게 됩니다.


- [백준(1213) 번](https://www.acmicpc.net/problem/1213)
    - 팰린드롬을 만들 수 없는 경우를 생각해보자.
        - AB 만들 수 없음
        - AABB 만들 수 있다
        - AAABBB 만들 수 없음
    - 각각의 문자열 중 같은 문자열의 개수가 홀수인 경우가 2가지 이상 있다면 팰린드롬을 만들 수 없다.
- [백준(1940) 번](https://www.acmicpc.net/problem/1940)
    - 투포인터를 이용하여 문제를 해결 할 수 있다. 이후에 학습하게 된다면 추가하겠습니다.
    - 순서에 상관 없이 전체중 2개를 뽑는 문제이므로 조합을 생각할 수 있다.
    - 조합은 for문을 이용하여 문제를 해결할 수 있다.
    - 조합으로 문제를 해결한다면, 문제의 입력 조건의 하나를 선택했을 때 최대 값은 100000이므로 2개를 조합하였을 경우 200000입니다. 따라서 m의 값이 최대 값을 넘어가게 된다면 조합을 만들 수 없으므로 바로 0을 출력해준다면, 좀 더 빠른 실행을 할 수 있습니다.
    - 저는 이분탐색으로 문제를 해결하였는데, 한 개를 선택하면 그 이후에 선택할 값은 m-arr[i]로써 목표값에 맞게 이분탐색을 돌려줍니다.


- [백준(3986) 번](https://www.acmicpc.net/problem/3986)
    - 처음 생각은 a,b가 무조건 짝수 개수를 가지고 있어야 성립한다는 것과, 인덱스 위치에 따라서 교차가 생기지 않을까 생각을 해보았습니다. 하지만 위치에 따라 제거 하는 방법에 대해 또 생각을 해보자니 경우의 수가 너무 많아지는 것 같아서 다른 방법을 선택하였습니다.
    - 문자열이 가로로 되어있는데 세로로 보게된다면, 스택을 떠올릴 수 있다는 것을 알게되었습니다. 스택을 이용하면 위에서 인덱스 위치에 따라 제거해야하는 고민도 사라지고 교차하게 된다면 스택에 잔여물이 남아 있다는 것을 알게 되었습니다. 그러므로 스택으로 문제를 해결하면 쉽게 풀 수 있었습니다.
- [백준(1629) 번](https://www.acmicpc.net/problem/1629)
    - 분할 정복으로 문제를 해결할 수 있다.
    - 지수가 홀수 일때는 자기 자신을 곱해준다.

- [백준(4375) 번](https://www.acmicpc.net/problem/4375)
   - 1,11,111,n+1개까지 써있는 수들의 집합을 생각했을 때, 비둘기집의 원리에 의해 n으로 나눈 나머지가 같은 서로 다른 두 수가 집합에 존재한다. 그 두 수를 오름차순으로 a b라 하면 b-a 도 n의 배수가 되어야 한다.
