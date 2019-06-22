void sortedInsert(stack<int>&st,int ele)
{
	if(st.empty() || ele > st.top())
		st.push(ele);
	else
	{
		int temp = st.top();
		st.pop();
		sortedInsert(st,ele);
		st.push(temp);
	}
}

void sortStack(stack<int>&st)
{
	if(!st.empty())
	{
		int temp = st.top();
		st.pop();
		sortStack(st);
		sortedInsert(st,temp);
	}
}