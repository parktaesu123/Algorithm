# [level 0] 문자열 뒤집기 - 181905 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181905) 

### 성능 요약

메모리: 33.5 MB, 시간: 0.16 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 08월 27일 12:54:44

### 문제 설명

<p style="user-select: auto !important;">문자열 <code style="user-select: auto !important;">my_string</code>과 정수 <code style="user-select: auto !important;">s</code>, <code style="user-select: auto !important;">e</code>가 매개변수로 주어질 때, <code style="user-select: auto !important;">my_string</code>에서 인덱스 <code style="user-select: auto !important;">s</code>부터 인덱스 <code style="user-select: auto !important;">e</code>까지를 뒤집은 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;"><code style="user-select: auto !important;">my_string</code>은 숫자와 알파벳으로만 이루어져 있습니다.</li>
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">my_string</code>의 길이 ≤ 1,000</li>
<li style="user-select: auto !important;">0 ≤ <code style="user-select: auto !important;">s</code> ≤ <code style="user-select: auto !important;">e</code> &lt; <code style="user-select: auto !important;">my_string</code>의 길이</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">my_string</th>
<th style="user-select: auto !important;">s</th>
<th style="user-select: auto !important;">e</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"Progra21Sremm3"</td>
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">12</td>
<td style="user-select: auto !important;">"ProgrammerS123"</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"Stanley1yelnatS"</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">10</td>
<td style="user-select: auto !important;">"Stanley1yelnatS"</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 1번의 <code style="user-select: auto !important;">my_string</code>에서 인덱스 6부터 인덱스 12까지를 뒤집은 문자열은 "ProgrammerS123"이므로 "ProgrammerS123"를 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 2번의 <code style="user-select: auto !important;">my_string</code>에서 인덱스 4부터 인덱스 10까지를 뒤집으면 원래 문자열과 같은 "Stanley1yelnatS"이므로 "Stanley1yelnatS"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges