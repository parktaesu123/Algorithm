# [level 0] 1로 만들기 - 181880 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181880) 

### 성능 요약

메모리: 33.5 MB, 시간: 0.16 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 14일 13:33:16

### 문제 설명

<p style="user-select: auto !important;">정수가 있을 때, 짝수라면 반으로 나누고, 홀수라면 1을 뺀 뒤 반으로 나누면, 마지막엔 1이 됩니다. 예를 들어 10이 있다면 다음과 같은 과정으로 1이 됩니다.</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">10 / 2 = 5</li>
<li style="user-select: auto !important;">(5 - 1) / 2 = 2</li>
<li style="user-select: auto !important;">2 / 2 = 1</li>
</ul>

<p style="user-select: auto !important;">위와 같이 3번의 나누기 연산으로 1이 되었습니다. </p>

<p style="user-select: auto !important;">정수들이 담긴 리스트 <code style="user-select: auto !important;">num_list</code>가 주어질 때, <code style="user-select: auto !important;">num_list</code>의 모든 원소를 1로 만들기 위해서 필요한 나누기 연산의 횟수를 return하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">3 ≤ <code style="user-select: auto !important;">num_list</code>의 길이 ≤ 15</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">num_list</code>의 원소 ≤ 30</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">num_list</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[12, 4, 15, 1, 14]</td>
<td style="user-select: auto !important;">11</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">12는 3번, 4는 2번, 15는 3번, 1은 0번, 14는 3번의 연산이 필요하기 때문에 총 11번의 연산이 필요합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges