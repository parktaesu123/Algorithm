# [level 0] 9로 나눈 나머지 - 181914 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181914?language=javascript) 

### 성능 요약

메모리: 38.3 MB, 시간: 7.27 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 07월 29일 20:42:29

### 문제 설명

<p style="user-select: auto !important;">음이 아닌 정수를 9로 나눈 나머지는 그 정수의 각 자리 숫자의 합을 9로 나눈 나머지와 같은 것이 알려져 있습니다.<br style="user-select: auto !important;">
이 사실을 이용하여 음이 아닌 정수가 <strong style="user-select: auto !important;">문자열</strong> <code style="user-select: auto !important;">number</code>로 주어질 때, 이 정수를 9로 나눈 나머지를 return 하는 solution 함수를 작성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">number</code>의 길이 ≤ 100,000</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">number</code>의 원소는 숫자로만 이루어져 있습니다.</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">number</code>는 정수 0이 아니라면 숫자 '0'으로 시작하지 않습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">number</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"123"</td>
<td style="user-select: auto !important;">6</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">"78720646226947352489"</td>
<td style="user-select: auto !important;">2</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 1번의 <code style="user-select: auto !important;">number</code>는 123으로 각 자리 숫자의 합은 6입니다. 6을 9로 나눈 나머지는 6이고, 실제로 123 = 9 × 13 + 6입니다. 따라서 6을 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">예제 2번의 <code style="user-select: auto !important;">number</code>는 78720646226947352489으로 각자리 숫자의 합은 101입니다. 101을 9로 나눈 나머지는 2이고, 실제로 78720646226947352489 = 9 × 8746738469660816943 + 2입니다. 따라서 2를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges