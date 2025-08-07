# [level 0] 세로 읽기 - 181904 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181904) 

### 성능 요약

메모리: 33.4 MB, 시간: 0.11 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 08일 01:33:20

### 문제 설명

<p style="user-select: auto !important;">문자열 <code style="user-select: auto !important;">my_string</code>과 두 정수 <code style="user-select: auto !important;">m</code>, <code style="user-select: auto !important;">c</code>가 주어집니다. <code style="user-select: auto !important;">my_string</code>을 한 줄에 <code style="user-select: auto !important;">m</code> 글자씩 가로로 적었을 때 왼쪽부터 세로로 <code style="user-select: auto !important;">c</code>번째 열에 적힌 글자들을 문자열로 return 하는 solution 함수를 작성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">my_string</code>은 영소문자로 이루어져 있습니다.</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">m</code> ≤ <code style="user-select: auto !important;">my_string</code>의 길이 ≤ 1,000</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">m</code>은 <code style="user-select: auto !important;">my_string</code> 길이의 약수로만 주어집니다.</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">c</code> ≤ <code style="user-select: auto !important;">m</code></li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">my_string</th>
<th style="user-select: auto !important;">m</th>
<th style="user-select: auto !important;">c</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"ihrhbakrfpndopljhygc"</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">"happy"</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"programmers"</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">"programmers"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 1번의 <code style="user-select: auto !important;">my_string</code>을 한 줄에 4 글자씩 쓰면 다음의 표와 같습니다.</li>
</ul>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">1열</th>
<th style="user-select: auto !important;">2열</th>
<th style="user-select: auto !important;">3열</th>
<th style="user-select: auto !important;">4열</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">i</td>
<td style="user-select: auto !important;">h</td>
<td style="user-select: auto !important;">r</td>
<td style="user-select: auto !important;">h</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">b</td>
<td style="user-select: auto !important;">a</td>
<td style="user-select: auto !important;">k</td>
<td style="user-select: auto !important;">r</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">f</td>
<td style="user-select: auto !important;">p</td>
<td style="user-select: auto !important;">n</td>
<td style="user-select: auto !important;">d</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">o</td>
<td style="user-select: auto !important;">p</td>
<td style="user-select: auto !important;">l</td>
<td style="user-select: auto !important;">j</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">h</td>
<td style="user-select: auto !important;">y</td>
<td style="user-select: auto !important;">g</td>
<td style="user-select: auto !important;">c</td>
</tr>
</tbody>
      </table><div class="highlight" style="user-select: auto !important;"><pre class="codehilite" style="user-select: auto !important;"><code style="user-select: auto !important;">2열에 적힌 글자를 세로로 읽으면 happy이므로 "happy"를 return 합니다.
</code></pre></div>
<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 2번의 <code style="user-select: auto !important;">my_string</code>은 <code style="user-select: auto !important;">m</code>이 1이므로 세로로 "programmers"를 적는 것과 같고 따라서 1열에 적힌 글자를 세로로 읽으면 programmers입니다. 따라서 "programmers"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges