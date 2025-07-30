import os
import stat

# Get directory where this script lives
script_dir = os.path.dirname(os.path.abspath(__file__))

# File extensions to delete (case-insensitive)
extensions_to_delete = [".out", ".exe", ".o", ".obj"]

def delete_build_files(folder):
    print(f"Cleaning build files in: {folder}")
    deleted_any = False

    for root, dirs, files in os.walk(folder):
        for file in files:
            full_path = os.path.join(root, file)
            _, ext = os.path.splitext(file)

            # Check if extension matches (case-insensitive)
            if ext.lower() in extensions_to_delete:
                try:
                    os.remove(full_path)
                    print(f"Deleted by extension: {full_path}")
                    deleted_any = True
                except Exception as e:
                    print(f"Failed to delete {full_path}: {e}")

            # OR if it's an executable file without an extension
            elif ext == "" and os.access(full_path, os.X_OK):
                try:
                    os.remove(full_path)
                    print(f"Deleted executable (no ext): {full_path}")
                    deleted_any = True
                except Exception as e:
                    print(f"Failed to delete {full_path}: {e}")

    if not deleted_any:
        print("No matching build files found.")

if __name__ == "__main__":
    delete_build_files(script_dir)
