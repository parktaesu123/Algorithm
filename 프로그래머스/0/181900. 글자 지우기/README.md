# [level 0] 글자 지우기 - 181900 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181900) 

### 성능 요약

메모리: 33.4 MB, 시간: 0.18 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 12일 23:30:17

### 문제 설명

<p style="user-select: auto !important;">문자열 <code style="user-select: auto !important;">my_string</code>과 정수 배열 <code style="user-select: auto !important;">indices</code>가 주어질 때, <code style="user-select: auto !important;">my_string</code>에서 <code style="user-select: auto !important;">indices</code>의 원소에 해당하는 인덱스의 글자를 지우고 이어 붙인 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">indices</code>의 길이 &lt; <code style="user-select: auto !important;">my_string</code>의 길이 ≤ 100</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">my_string</code>은 영소문자로만 이루어져 있습니다</li>
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">indices</code>의 원소 &lt; <code style="user-select: auto !important;">my_string</code>의 길이</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">indices</code>의 원소는 모두 서로 다릅니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">my_string</th>
<th style="user-select: auto !important;">indices</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"apporoograpemmemprs"</td>
<td style="user-select: auto !important;">[1, 16, 6, 15, 0, 10, 11, 3]</td>
<td style="user-select: auto !important;">"programmers"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 1번의 <code style="user-select: auto !important;">my_string</code>의 인덱스가 잘 보이도록 표를 만들면 다음과 같습니다.</li>
</ul>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">index</th>
<th style="user-select: auto !important;">0</th>
<th style="user-select: auto !important;">1</th>
<th style="user-select: auto !important;">2</th>
<th style="user-select: auto !important;">3</th>
<th style="user-select: auto !important;">4</th>
<th style="user-select: auto !important;">5</th>
<th style="user-select: auto !important;">6</th>
<th style="user-select: auto !important;">7</th>
<th style="user-select: auto !important;">8</th>
<th style="user-select: auto !important;">9</th>
<th style="user-select: auto !important;">10</th>
<th style="user-select: auto !important;">11</th>
<th style="user-select: auto !important;">12</th>
<th style="user-select: auto !important;">13</th>
<th style="user-select: auto !important;">14</th>
<th style="user-select: auto !important;">15</th>
<th style="user-select: auto !important;">16</th>
<th style="user-select: auto !important;">17</th>
<th style="user-select: auto !important;">18</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">my_string</td>
<td style="user-select: auto !important;">a</td>
<td style="user-select: auto !important;">p</td>
<td style="user-select: auto !important;">p</td>
<td style="user-select: auto !important;">o</td>
<td style="user-select: auto !important;">r</td>
<td style="user-select: auto !important;">o</td>
<td style="user-select: auto !important;">o</td>
<td style="user-select: auto !important;">g</td>
<td style="user-select: auto !important;">r</td>
<td style="user-select: auto !important;">a</td>
<td style="user-select: auto !important;">p</td>
<td style="user-select: auto !important;">e</td>
<td style="user-select: auto !important;">m</td>
<td style="user-select: auto !important;">m</td>
<td style="user-select: auto !important;">e</td>
<td style="user-select: auto !important;">m</td>
<td style="user-select: auto !important;">p</td>
<td style="user-select: auto !important;">r</td>
<td style="user-select: auto !important;">s</td>
</tr>
</tbody>
      </table><div class="highlight" style="user-select: auto !important;"><pre class="codehilite" style="user-select: auto !important;"><code style="user-select: auto !important;">`indices`에 있는 인덱스의 글자들을 지우고 이어붙이면 "programmers"가 되므로 이를 return 합니다.
</code></pre></div>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges