import os

def generate_cpp_file(folder_name, file_name, content):
    cpp_content = ""

    file_name = file_name.replace(" ", "_").replace("-", "_")  # Replace spaces and hyphens with underscores
    file_path = os.path.join(folder_name, f"{file_name}.cpp")
    
    with open(file_path, "w", encoding="utf-8") as cpp_file:
        cpp_file.write(cpp_content)


def generate_py_file(folder_name, file_name, content):
    py_content = ""

    file_name = file_name.replace(" ", "_").replace("-", "_")  # Replace spaces and hyphens with underscores
    file_path = os.path.join(folder_name, f"{file_name}.py")
    
    with open(file_path, "w", encoding="utf-8") as py_file:
        py_file.write(py_content)


def main():
    folder_name = input("폴더 이름을 입력하세요: ")
    
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)

    input_lines = []
    while True:
        line = input("파일 이름을 입력하세요 (종료하려면 'exit' 입력): ")
        if line.lower() == 'exit':
            break
        input_lines.append(line)

    for i, file_name in enumerate(input_lines, start=1):
        # C++ 파일 생성
        generate_cpp_file(folder_name, f"{file_name}", file_name)

        # Python 파일 생성
        generate_py_file(folder_name, f"{file_name}", file_name)

    print(f"{len(input_lines)}개의 빈 C++ 파일과 빈 Python 파일이 {folder_name} 폴더 안에 생성되었습니다.")


if __name__ == "__main__":
    main()
