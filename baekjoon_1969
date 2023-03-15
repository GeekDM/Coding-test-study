N_M = input().split()
N = int(N_M[0])
M = int(N_M[1])

dnalist = []                                  ##데이터 리스트 생성
dna = ''
dist = 0

for i in range(N):
    dnalist.append(input())                   ##데이터 저장

dnalist.sort()                                ##사전순으로 정렬

for i in range(M):
    dic = {}                                  ##매번 딕셔너리 초기화
    for j in range(N):
        if dnalist[j][i] not in dic:
            dic[dnalist[j][i]] = 1            ##새로운 값 -> 1

        else:
            dic[dnalist[j][i]] += 1           ##기존 값 -> +1

    ans = list(dic.items())                   ##딕셔너리 아이템을 2차원 리스트로
    ans.sort(key = lambda x : (-x[1], x[0]))  ##중복 수를 기준으로 내림차순, 같다면 사전식으로 오름차순으로 정렬
    dna += ans[0][0]
    dist += N - ans[0][1]

print(dna)
print(dist)
