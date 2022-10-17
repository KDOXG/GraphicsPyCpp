install:
	@pip install -r requirements.txt
	@pip install -e . -vvv

main:
	@python main.py