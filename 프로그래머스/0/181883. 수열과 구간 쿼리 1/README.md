# [level 0] 수열과 구간 쿼리 1 - 181883 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181883) 

### 성능 요약

메모리: 36.6 MB, 시간: 27.96 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 13일 17:35:32

### 문제 설명

<p style="user-select: auto !important;">정수 배열 <code style="user-select: auto !important;">arr</code>와 2차원 정수 배열 <code style="user-select: auto !important;">queries</code>이 주어집니다. <code style="user-select: auto !important;">queries</code>의 원소는 각각 하나의 <code style="user-select: auto !important;">query</code>를 나타내며, <code style="user-select: auto !important;">[s, e]</code> 꼴입니다.</p>

<p style="user-select: auto !important;">각 <code style="user-select: auto !important;">query</code>마다 순서대로 <code style="user-select: auto !important;">s</code> ≤ <code style="user-select: auto !important;">i</code> ≤ <code style="user-select: auto !important;">e</code>인 모든 <code style="user-select: auto !important;">i</code>에 대해 <code style="user-select: auto !important;">arr[i]</code>에 1을 더합니다.</p>

<p style="user-select: auto !important;">위 규칙에 따라 <code style="user-select: auto !important;">queries</code>를 처리한 이후의 <code style="user-select: auto !important;">arr</code>를 return 하는 solution 함수를 완성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">arr</code>의 길이 ≤ 1,000

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">arr</code>의 원소 ≤ 1,000,000</li>
</ul></li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">queries</code>의 길이 ≤ 1,000

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">s</code> ≤ <code style="user-select: auto !important;">e</code> &lt; <code style="user-select: auto !important;">arr</code>의 길이</li>
</ul></li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">arr</th>
<th style="user-select: auto !important;">queries</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[0, 1, 2, 3, 4]</td>
<td style="user-select: auto !important;">[[0, 1],[1, 2],[2, 3]]</td>
<td style="user-select: auto !important;">[1, 3, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">각 쿼리에 따라 <code style="user-select: auto !important;">arr</code>가 다음과 같이 변합니다.</li>
</ul>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">i</th>
<th style="user-select: auto !important;">queries[i]</th>
<th style="user-select: auto !important;">arr</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">-</td>
<td style="user-select: auto !important;">-</td>
<td style="user-select: auto !important;">[0, 1, 2, 3, 4]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">0</td>
<td style="user-select: auto !important;">[0,1]</td>
<td style="user-select: auto !important;">[1, 2, 2, 3, 4]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">[1,2]</td>
<td style="user-select: auto !important;">[1, 3, 3, 3, 4]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">[2,3]</td>
<td style="user-select: auto !important;">[1, 3, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">따라서 [1, 3, 4, 4, 4]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges