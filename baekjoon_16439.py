N, M = map(int, input().split())

L = []
for i in range(N):
    L.append(input().split())

sf = 0                                          #만족도
dic = {}

for i in range(N):
    B = 0                                       #선호도
    index = ''

    for j in range(M):
        if B < int(L[i][j]):
            B = int(L[i][j])
            index = str(j)

    dic[index] = B
    ans = list(dic.items())
    ans.sort(key = lambda x : -x[1])            #선호도 순으로 정렬

lis = []                                        #인덱스 저장용 리스트
for i in range(N):
    B = 0
    if i < 3:
        sf += ans[i][1]                         #3개까지 선호도 합
        lis.append(ans[i][0])                   #3개까지 인덱스 저장
    else:
        lis = list(map(int, lis))               #문자 -> 정수로 변환
        for j in lis:
            if B < int(L[i][j]):
                B = int(L[i][j])                #그중 가장 큰 숫자 저장
        sf += B                                 #선호도 합

print(sf)
