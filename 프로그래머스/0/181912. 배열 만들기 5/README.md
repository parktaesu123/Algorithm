# [level 0] 배열 만들기 5 - 181912 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181912) 

### 성능 요약

메모리: 41.2 MB, 시간: 3.21 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 26일 10:10:04

### 문제 설명

<p style="user-select: auto !important;">문자열 배열 <code style="user-select: auto !important;">intStrs</code>와 정수 <code style="user-select: auto !important;">k</code>, <code style="user-select: auto !important;">s</code>, <code style="user-select: auto !important;">l</code>가 주어집니다. <code style="user-select: auto !important;">intStrs</code>의 원소는 숫자로 이루어져 있습니다. </p>

<p style="user-select: auto !important;">배열 <code style="user-select: auto !important;">intStrs</code>의 각 원소마다 <code style="user-select: auto !important;">s</code>번 인덱스에서 시작하는 길이 <code style="user-select: auto !important;">l</code>짜리 부분 문자열을 잘라내 정수로 변환합니다. 이때 변환한 정수값이 <code style="user-select: auto !important;">k</code>보다 큰 값들을 담은 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">s</code> &lt; 100</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">l</code> ≤ 8</li>
<li style="user-select: auto !important;">10<sup style="user-select: auto !important;">l - 1</sup> ≤ <code style="user-select: auto !important;">k</code> &lt; 10<sup style="user-select: auto !important;">l</sup></li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">intStrs</code>의 길이 ≤ 10,000

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">s</code> + <code style="user-select: auto !important;">l</code> ≤ <code style="user-select: auto !important;">intStrs</code>의 원소의 길이 ≤ 120</li>
</ul></li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">intStrs</th>
<th style="user-select: auto !important;">k</th>
<th style="user-select: auto !important;">s</th>
<th style="user-select: auto !important;">l</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">["0123456789","9876543210","9999999999999"]</td>
<td style="user-select: auto !important;">50000</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">[56789, 99999]</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">idx에 따라 잘라낸 문자열과 그에 따른 <code style="user-select: auto !important;">ret</code>의 변화를 표시하면 다음 표와 같습니다.</li>
</ul>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">idx</th>
<th style="user-select: auto !important;">잘라낸 문자열</th>
<th style="user-select: auto !important;">ret</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">0</td>
<td style="user-select: auto !important;">"56789"</td>
<td style="user-select: auto !important;">[56789]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">"43210"</td>
<td style="user-select: auto !important;">[56789]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">"99999"</td>
<td style="user-select: auto !important;">[56789, 99999]</td>
</tr>
</tbody>
      </table>
<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">따라서 [56789, 99999]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges