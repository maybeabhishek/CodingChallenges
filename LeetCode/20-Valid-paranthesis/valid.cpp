class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        const char open[] = {'(', '[', '{'};
        const char close[] = {')', ']', '}'};
        bool done;
        for (auto i : s)
        {
            done = false;
            for (auto j : open)
            {
                if (i == j)
                {
                    st.push(i);
                    done = true;
                }
            }

            if (!done)
            {
                if (st.empty())
                    return false;
                for (int j = 0; j < 3; j++)
                {
                    if (i == close[j])
                    {
                        // cout << i<<"  "<<close[j]<<endl;
                        if (st.top() == open[j])
                            st.pop();
                        else
                            return false;
                    }
                }
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};