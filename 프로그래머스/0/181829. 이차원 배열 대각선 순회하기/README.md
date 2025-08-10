# [level 0] 이차원 배열 대각선 순회하기 - 181829 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181829) 

### 성능 요약

메모리: 33.6 MB, 시간: 0.20 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 10일 21:38:53

### 문제 설명

<p style="user-select: auto !important;">2차원 정수 배열 <code style="user-select: auto !important;">board</code>와 정수 <code style="user-select: auto !important;">k</code>가 주어집니다.</p>

<p style="user-select: auto !important;"><code style="user-select: auto !important;">i</code> + <code style="user-select: auto !important;">j</code> &lt;= <code style="user-select: auto !important;">k</code>를 만족하는 모든 (<code style="user-select: auto !important;">i</code>, <code style="user-select: auto !important;">j</code>)에 대한 <code style="user-select: auto !important;">board[i][j]</code>의 합을 return 하는 solution 함수를 완성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ board의 길이 ≤ 100</li>
<li style="user-select: auto !important;">1 ≤ board[i]의 길이 ≤ 100

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ board[i][j] ≤ 10,000</li>
<li style="user-select: auto !important;">모든 board[i]의 길이는 같습니다.</li>
</ul></li>
<li style="user-select: auto !important;">0 ≤ k &lt; board의 길이 + board[i]의 길이</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">board</th>
<th style="user-select: auto !important;">k</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[[0, 1, 2],[1, 2, 3],[2, 3, 4],[3, 4, 5]]</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">8</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">입출력 예 #1의 <code style="user-select: auto !important;">board</code>를 표로 나타내면 다음과 같습니다.</li>
</ul>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">i \ j</th>
<th style="user-select: auto !important;">0</th>
<th style="user-select: auto !important;">1</th>
<th style="user-select: auto !important;">2</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">0</td>
<td style="user-select: auto !important;"><em style="user-select: auto !important;">0</em></td>
<td style="user-select: auto !important;"><em style="user-select: auto !important;">1</em></td>
<td style="user-select: auto !important;"><em style="user-select: auto !important;">2</em></td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;"><em style="user-select: auto !important;">1</em></td>
<td style="user-select: auto !important;"><em style="user-select: auto !important;">2</em></td>
<td style="user-select: auto !important;">3</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;"><em style="user-select: auto !important;">2</em></td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">4</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">5</td>
</tr>
</tbody>
      </table>
<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">i</code> + <code style="user-select: auto !important;">j</code>가 2보다 작거나 같은 항들의 합은 0 + 1 + 2 + 1 + 2 + 2 = 8이므로 8을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges