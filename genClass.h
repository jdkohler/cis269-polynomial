const int LIMIT = 100;

template<class T>
class genClass {
private:
	int max;
	int index;
	T storage[LIMIT];
	
public:
	genClass(int size = 50)	
	{
		if (size <= LIMIT)
		{
			max = size;
			index = 0;
		}
		else
		{
			max = -1;
			index = -1;
		}
	}
	int getSize()
	{
		return max;
	}
	
	int addElement(T element)
	{
		if (index > -1)
		{
			storage[index] = element;
			index++;
			return 0;
		}
		else {
			return -1;
		}
	}
	T getElement(int requestIndex)
	{
		if (requestIndex <= index)
		{
			return storage[requestIndex];
		}
		else {
			return -1;
		}
	}
};