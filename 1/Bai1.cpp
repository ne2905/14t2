class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None

# Chèn vào BST
def insert(root, x):
    if root is None:
        return Node(x)
    if x < root.key:
        root.left = insert(root.left, x)
    elif x > root.key:
        root.right = insert(root.right, x)
    return root

# Duyệt tiền tự
def preorder(root):
    if root:
        print(root.key, end=" ")
        preorder(root.left)
        preorder(root.right)

# Tìm nút nhỏ nhất
def find_min(root):
    while root.left:
        root = root.left
    return root

# Xóa nút
def delete_node(root, k):
    if root is None:
        return root

    if k < root.key:
        root.left = delete_node(root.left, k)
    elif k > root.key:
        root.right = delete_node(root.right, k)
    else:
        # 0 hoặc 1 con
        if root.left is None:
            return root.right
        elif root.right is None:
            return root.left
        # 2 con
        temp = find_min(root.right)
        root.key = temp.key
        root.right = delete_node(root.right, temp.key)
    return root

# Tìm kiếm
def search(root, k):
    if root is None:
        return False
    if root.key == k:
        return True
    if k < root.key:
        return search(root.left, k)
    return search(root.right, k)

# Main
arr = [15, 7, 24, 2, 10, 20, 34, 9, 12, 55]
root = None

for x in arr:
    root = insert(root, x)

print("Preorder ban dau:", end=" ")
preorder(root)
print()

# Thêm 28
root = insert(root, 28)
print("Preorder sau khi them 28:", end=" ")
preorder(root)
print()

# Nhập K
K = int(input("Nhap K can xoa: "))

if search(root, K):
    root = delete_node(root, K)
    print("Cay sau khi xoa", K, ":", end=" ")
    preorder(root)
else:
    print("Khong tim thay", K)
