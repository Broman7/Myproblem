def Dijkstra(N, S, matrix):
	valid = [True]*N        
	weight = [1000000]*N
	weight[S] = 0
	for i in range(N):
		min_weight = 1000001
		ID_min_weight = -1
		for i in range(N):
			if valid[i] and weight[i] < min_weight:
				min_weight = weight[i]
				ID_min_weight = i
		for i in range(N):
			if weight[ID_min_weight] + matrix[ID_min_weight][i] < weight[i]:
				weight[i] = weight[ID_min_weight] + matrix[ID_min_weight][i]
		valid[ID_min_weight] = False
	return weight

n, m , k= list(map(int,input().split()))
win = list(map(int,input().split()))
mas = []
for i in range(0,n):
	mas.append(([1000000]*n))
for i in range(0,k):
	a,b,t = list(map(int,input().split()))
	mas[a-1][b-1]=mas[b-1][a-1]=t
s = int(input())
s-=1
w = Dijkstra(n,s,mas)
#print(w)
#Analis . DIid all winers get gifts
tm = 0
all_get_gifts = True

for i in win:
	if w[i-1] == 1000000:
		all_get_gifts = False
		break
	if w[i-1] > tm:
		tm = w[i-1]

if(all_get_gifts == True):
	print("The good sponsor!" , tm , sep='\n')
else:
	print("It is not fault of sponsor...")