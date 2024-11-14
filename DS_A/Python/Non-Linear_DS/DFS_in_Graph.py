# DFS funksiyasi
def dfs(graph, vertex, visited=None):
    if visited is None:
        visited = set()  # Bu tashrif buyurilgan tugunlarni saqlash uchun to‘plam
    visited.add(vertex)  # Joriy tugunni tashrif buyurilganlar to‘plamiga qo‘shamiz
    print(vertex)  # Tashrif buyurilgan tugunni chop etamiz
    # Qo‘shni tugunlarni tekshirib chiqamiz
    for neighbor in graph[vertex]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)  # Rekursiv ravishda qo‘shni tugunni o‘rganamiz
    return visited

# Grafikni yaratish
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F'],
    'D': ['B'],
    'E': ['B', 'F'],
    'F': ['C', 'E']
}

# DFSni boshlash
visited = dfs(graph, 'A')
