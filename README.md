# Algorithmes de Parcours de Graphes (BFS/DFS)

Implémentation des algorithmes de parcours en largeur (BFS) et en profondeur (DFS) en JavaScript, Python, Go et C++.

## Contenu

- **BFS** (Breadth-First Search): Parcours niveau par niveau
- **DFS** (Depth-First Search): Parcours en profondeur d'abord

## Technologies

| Langage  | Fichier         |
|----------|-----------------|
| JavaScript | `bfs_dfs.js`   |
| Python   | `bfs_dfs.py`    |
| Go       | `bfs_dfs.go`    |
| C++      | `bfs_dfs.cpp`   |

## Structure du Graphe
```json
{
  "a": ["b","g"],
  "b": ["c","e","g"],
  "c": ["d","f","e"],
  "d": ["c"],
  "e": ["c","b","g","h","i","f"],
  "f": ["c","e","i"],
  "g": ["a","b","e","h"],
  "h": ["e","g","i"],
  "i": ["f","e","h"]
}
