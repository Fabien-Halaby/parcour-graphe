const G = {
    'a':['b','g'],
    'b':['c','e','g'],
    'c':['d','f','e'],
    'd':['c'],
    'e':['c','b','g','h','i','f'],
    'f':['c','e','i'],
    'g':['a','b','e','h'],
    'h':['e','g','i'],
    'i':['f','e','h']
};

function BFS(G,s) {
	let aTraiter = [];
	let dejaVu = [];

	aTraiter.push(s);
	dejaVu.push(s);

	while(aTraiter.length > 0) {
		let si = aTraiter[0];
		aTraiter.shift();

		for(let i = 0; i < G[si].length; i++) {
			if(!dejaVu.includes(G[si][i])) {
				dejaVu.push(G[si][i]);
				aTraiter.push(G[si][i])
			}
		}
	}

	console.log("BFS:",dejaVu);
}

function DFS(G,s) {
	let aTraiter = [];
	let dejaVu = [];

	aTraiter.push(s);
	dejaVu.push(s);

	while(aTraiter.length > 0) {
		let si = aTraiter[aTraiter.length - 1];
		aTraiter.pop();

		for(let i = 0; i < G[si].length; i++) {
			if(!dejaVu.includes(G[si][i])) {
				dejaVu.push(G[si][i]);
				aTraiter.push(G[si][i]);
			}
		}
	}

	console.log("DFS:",dejaVu);
}

BFS(G,'a');
DFS(G,'a');
