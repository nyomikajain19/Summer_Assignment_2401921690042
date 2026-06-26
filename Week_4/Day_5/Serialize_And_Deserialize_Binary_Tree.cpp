class Codec {
public:
    void serializeHelper(TreeNode* root, string &ans) {
        if (root == nullptr) {
            ans += "#,";
            return;
        }
        ans += to_string(root->val) + ",";
        serializeHelper(root->left, ans);
        serializeHelper(root->right, ans);
    }
    string serialize(TreeNode* root) {
        string ans = "";
        serializeHelper(root, ans);
        return ans;
    }
    TreeNode* deserializeHelper(stringstream &ss) {
        string val;
        getline(ss, val, ',');
        if (val == "#")
            return nullptr;
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);
        return root;
    }
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }
};