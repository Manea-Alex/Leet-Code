# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root, array=None):
        # Recursive method that uses the 3 steps to traverse in order
        # 1. Go to left and perfom traversal
        # 2. Add the value of the current node to the array
        # 3. Go right and perform traversal
        if array is None:
            array = []
        if root is not None:
            self.inorderTraversal(root.left, array)
            array.append(root.val)
            self.inorderTraversal(root.right, array)
        return array

        # Second method, using a stack, just repeat the steps
        # go left untill and add the values to the stack
        # when you reach a leaf node you add the leaf from the stack to array
        # and move the node to the right

    #    stack, output = [], []
    #    current = root

    #    while current or stack:
    #        while current:
    #             stack.append(current)
    #             current = current.left

    #        current = stack.pop()
    #        output.append(current.val)
    #        current = current.right
    #    return output
