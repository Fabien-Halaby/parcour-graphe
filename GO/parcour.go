package main

import "fmt"

func In[T comparable](slice []T, value T) bool {
	for _, v := range slice {
		if v == value {
			return true
		}
	}

	return false
}

func BFS(G map[string][]string, s string) {
	var aTraiter []string
	var dejaVu []string

	aTraiter = append(aTraiter, s)
	dejaVu = append(dejaVu, s)

	for len(aTraiter) > 0 {
		si := aTraiter[0]
		aTraiter = aTraiter[1:]

		for _, t := range G[si] {
			if !In(dejaVu, t) {
				dejaVu = append(dejaVu, t)
				aTraiter = append(aTraiter, t)
			}
		}
	}

	fmt.Println("BFS:", dejaVu)
}

func DFS(G map[string][]string, s string) {
	var aTraiter []string
	var dejaVu []string

	aTraiter = append(aTraiter, s)
	dejaVu = append(dejaVu, s)

	for len(aTraiter) > 0 {
		si := aTraiter[len(aTraiter)-1]
		aTraiter = aTraiter[:len(aTraiter)-1]

		for _, t := range G[si] {
			if !In(dejaVu, t) {
				dejaVu = append(dejaVu, t)
				aTraiter = append(aTraiter, t)
			}
		}
	}

	fmt.Println("DFS:", dejaVu)
}

func main() {
	G := map[string][]string{
		"a": {"b", "g"},
		"b": {"c", "e", "g"},
		"c": {"d", "f", "e"},
		"d": {"c"},
		"e": {"c", "b", "g", "h", "i", "f"},
		"f": {"c", "e", "i"},
		"g": {"a", "b", "e", "h"},
		"h": {"e", "g", "i"},
		"i": {"f", "e", "h"},
	}

	BFS(G, "a")
	DFS(G, "a")
}
