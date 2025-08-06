# [level 0] 배열 만들기 3 - 181895 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181895) 

### 성능 요약

메모리: 42.2 MB, 시간: 6.49 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 06일 13:19:53

### 문제 설명

<p style="user-select: auto !important;">정수 배열 <code style="user-select: auto !important;">arr</code>와 2개의 구간이 담긴 배열 <code style="user-select: auto !important;">intervals</code>가 주어집니다.</p>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">intervals</code>는 항상 <code style="user-select: auto !important;">[[a1, b1], [a2, b2]]</code>의 꼴로 주어지며 각 구간은 닫힌 구간입니다. 닫힌 구간은 양 끝값과 그 사이의 값을 모두 포함하는 구간을 의미합니다.</p>

<p style="user-select: auto !important;">이때 배열 <code style="user-select: auto !important;">arr</code>의 첫 번째 구간에 해당하는 배열과 두 번째 구간에 해당하는 배열을 앞뒤로 붙여 새로운 배열을 만들어 return 하는 solution 함수를 완성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">arr</code>의 길이 ≤ 100,000

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">arr</code>의 원소 &lt; 100</li>
</ul></li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">a1</code> ≤ <code style="user-select: auto !important;">b1</code> &lt; <code style="user-select: auto !important;">arr</code>의 길이</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">a2</code> ≤ <code style="user-select: auto !important;">b2</code> &lt; <code style="user-select: auto !important;">arr</code>의 길이</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">arr</th>
<th style="user-select: auto !important;">intervals</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[1, 2, 3, 4, 5]</td>
<td style="user-select: auto !important;">[[1, 3], [0, 4]]</td>
<td style="user-select: auto !important;">[2, 3, 4, 1, 2, 3, 4, 5]</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">첫 번째 구간에 해당하는 배열은 [2, 3, 4] 입니다.</li>
<li style="user-select: auto !important;">두 번째 구간에 해당하는 배열은 [1, 2, 3, 4, 5] 입니다.</li>
<li style="user-select: auto !important;">따라서 이 두 배열을 앞뒤로 붙인 배열인 [2, 3, 4, 1, 2, 3, 4, 5]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges