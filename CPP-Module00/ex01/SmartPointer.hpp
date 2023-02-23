template<class T>
class SmartPointer {
	public:
		SmartPointer(T *pointer) {
			pointer_ = pointer;
		}
		~SmartPointer(){
			if (pointer_ != NULL) {
				delete pointer_;
			}
		}
		T *operator->() {
			return pointer_;
		}

	private:
		T *pointer_;
};