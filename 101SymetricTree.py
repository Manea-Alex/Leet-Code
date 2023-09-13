# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def isSymmetric(self, root):

        def dfs(left, right):
            # verifica daca ambele noduri sunt nule daca sunt e simetric
            if not left and not right:
                return True
            # daca unu din ele nu e returnez fals
            if not left or not right:
                return False
            # apelez recursiv functia prin care se verifica partea stanga si dreapta
            return (left.val == right.val and
                    dfs(left.left, right.right)
                    and dfs(left.right, right.left))
        return dfs(root.left, root.right)


def build_tree_from_list(l):
    if not l:
        return None
    root = TreeNode(l[0])
    nodes = [root]
    idx = 1
    while nodes and idx < len(l):
        node = nodes.pop(0)
        if l[idx] is not None:
            node.left = TreeNode(l[idx])
            nodes.append(node.left)
        idx += 1
        if idx < len(l) and l[idx] is not None:
            node.right = TreeNode(l[idx])
            nodes.append(node.right)
        idx += 1
    return root


def tree_to_list(root):
    if not root:
        return []

    result = []
    queue = [root]
    while queue:
        current = queue.pop(0)
        result.append(current.val)

        if current.left:
            queue.append(current.left)
        if current.right:
            queue.append(current.right)

    return result


if __name__ == "__main__":

    symmetric = Solution()
    tree_list = [1, 2, 2, 3, 4, 4, 3, 3]
    root = build_tree_from_list(tree_list)
    treee = tree_to_list(root)
    print(symmetric.isSymmetric(root))
