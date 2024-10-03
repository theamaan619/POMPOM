tree = [[[7, 1, 2], [7, -8, -9]], [[9, 4, 7], [-3, 5, 3]]]
root = 0
pruned = 0

def children(branch, depth, alpha, beta):
    global pruned
    i = 0
    for child in branch:
        if isinstance(child, list):  # Check if the child is a list
            nalpha, nbeta = children(child, depth + 1, alpha, beta)
            if depth % 2 == 1:  # Minimizing level
                beta = min(nalpha, beta)
            else:  # Maximizing level
                alpha = max(nbeta, alpha)
            branch[i] = alpha if depth % 2 == 0 else beta
            if alpha >= beta:
                pruned += 1
                break
        else:
            if depth % 2 == 0:  # Maximizing level
                alpha = max(alpha, child)
            else:  # Minimizing level
                beta = min(beta, child)
            if alpha >= beta:
                pruned += 1
                break
        i += 1
    return alpha, beta

def alphabeta(in_tree=tree, start=root, upper=-float('inf'), lower=float('inf')):
    global tree, pruned, root
    alpha, beta = children(in_tree, start, upper, lower)
    tree = alpha if root == 0 else beta
    return alpha, beta, tree, pruned

if __name__ == "__main__":
    alpha, beta, result_tree, pruned_count = alphabeta()
    print("(alpha, beta):", alpha, beta)
    print("Result:", result_tree)
    print("Times pruned:", pruned_count)
