# [Bronze II] Filling Diamonds - 30174 

[문제 링크](https://www.acmicpc.net/problem/30174) 

### 성능 요약

메모리: 19976 KB, 시간: 392 ms

### 분류

애드 혹

### 제출 일자

2026년 4월 27일 11:24:44

### 문제 설명

<p>You have integer $n$. Calculate how many ways are there to fully cover belt-like area of $4n-2$ triangles with diamond shapes. </p>

<p>Diamond shape consists of two triangles. You can move, rotate or flip the shape, but you cannot scale it. </p>

<p>$2$ coverings are different if some $2$ triangles are covered by the same diamond shape in one of them and by different diamond shapes in the other one.</p>

<p>Please look at pictures below for better understanding.</p>

<p style="text-align: center;"><img alt="" src="" style="width: 471px; height: 170px;"></p>

<p style="text-align: center;">On the left you can see the diamond shape you will use, and on the right you can see the area you want to fill.</p>

<p style="text-align: center;"><img alt="" src="" style="width: 300px; height: 450px;"></p>

<p style="text-align: center;">These are the figures of the area you want to fill for $n = 1, 2, 3, 4$.</p>

<p>You have to answer $t$ independent test cases.</p>

### 입력 

 <p>The first line contains a single integer $t$ ($1 \le t \le 10^{4}$) --- the number of test cases.</p>

<p>Each of the next $t$ lines contains a single integer $n$ ($1 \le n \le 10^{9}$).</p>

### 출력 

 <p>For each test case, print the number of ways to fully cover belt-like area of $4n-2$ triangles using diamond shape. It can be shown that under given constraints this number of ways doesn't exceed $10^{18}$.</p>

